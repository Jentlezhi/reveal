//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView, XMDubShowMSSearchRecommendCellModel;

@interface XMDubShowMSSearchRecommendCell : UICollectionViewCell
{
    XMDubShowMSSearchRecommendCellModel *_model;
    UIImageView *_hotImageView;
    UIView *_tipView;
    UILabel *_titleLabel;
    UILabel *_nLabel;
}

@property(retain, nonatomic) UILabel *nLabel; // @synthesize nLabel=_nLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UIImageView *hotImageView; // @synthesize hotImageView=_hotImageView;
@property(retain, nonatomic) XMDubShowMSSearchRecommendCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

