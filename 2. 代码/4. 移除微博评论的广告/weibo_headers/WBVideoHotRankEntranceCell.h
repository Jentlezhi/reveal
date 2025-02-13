//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, WBideoHotRankEntranceItemModel;

@interface WBVideoHotRankEntranceCell : UICollectionViewCell
{
    WBideoHotRankEntranceItemModel *_data;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_bubbleImageView;
}

@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) WBideoHotRankEntranceItemModel *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)loadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)mediaExposureDidFinish;
- (id)workingAreaCustomHashID;
- (unsigned long long)wbvideo_sceneType;
- (id)mediaExposureExtraLogParameters;
- (id)mediaExposureStatus;
- (id)mediaExposureAnalysisPageInfo;
- (id)mediaExposureItem;
- (unsigned long long)observerOptions;

@end

