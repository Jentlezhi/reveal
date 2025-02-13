//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMTableViewCell.h"

@class UIButton, UILabel, UIView, XMTableCellObject, XMWebImageView;
@protocol XMSoundDailyUpdateAlbumCellDelegate;

@interface XMSoundDailyUpdateAlbumCell : XMTableViewCell
{
    XMTableCellObject *_cellObject;
    id <XMSoundDailyUpdateAlbumCellDelegate> _delegate;
    XMWebImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_updateLabel;
    UIButton *_subscriptionButton;
    UIView *_maskView;
}

+ (double)tableView:(id)arg1 heightForCellObject:(id)arg2;
+ (id)cellObjectWithCellModel:(id)arg1 customDelegate:(id)arg2;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *subscriptionButton; // @synthesize subscriptionButton=_subscriptionButton;
@property(retain, nonatomic) UILabel *updateLabel; // @synthesize updateLabel=_updateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) XMWebImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak id <XMSoundDailyUpdateAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) XMTableCellObject *cellObject; // @synthesize cellObject=_cellObject;
- (void).cxx_destruct;
- (void)reloadCellWithCellObject:(id)arg1 tableViewDelegate:(id)arg2;
- (void)p_subscriptionAction:(id)arg1;
- (void)p_setConstraints;
- (void)p_setUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

