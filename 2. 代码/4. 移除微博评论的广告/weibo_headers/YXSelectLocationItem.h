//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UILabel, YXLiveNearSelectItemListModel;

@interface YXSelectLocationItem : UICollectionViewCell
{
    YXLiveNearSelectItemListModel *_model;
    unsigned long long _status;
    UILabel *_cityLabel;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) YXLiveNearSelectItemListModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

