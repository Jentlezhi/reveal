//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, UIButton, UIImageView, UILabel, UIView;
@protocol TBLiveTimeShiftGoodCellDelegate;

@interface TBLiveTimeShiftGoodCell : UICollectionViewCell
{
    _Bool _isFocused;
    NSIndexPath *_indexPath;
    UIImageView *_goodImageView;
    UILabel *_goodIndexLabel;
    UILabel *_timeShiftLabel;
    id <TBLiveTimeShiftGoodCellDelegate> _cellDelegate;
    UIButton *_actionButton;
    UIView *_detailTipView;
    UIView *_shadowView;
}

@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *detailTipView; // @synthesize detailTipView=_detailTipView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) __weak id <TBLiveTimeShiftGoodCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(nonatomic) _Bool isFocused; // @synthesize isFocused=_isFocused;
@property(retain, nonatomic) UILabel *timeShiftLabel; // @synthesize timeShiftLabel=_timeShiftLabel;
@property(retain, nonatomic) UILabel *goodIndexLabel; // @synthesize goodIndexLabel=_goodIndexLabel;
@property(retain, nonatomic) UIImageView *goodImageView; // @synthesize goodImageView=_goodImageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (void)onActionButtonClicked:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

