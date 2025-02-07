//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "YXLotteryTaskInfoCellDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, YXAudienceLotteryInfoModel, YXLiveTimerNew;
@protocol YXLotteryJoinViewDelegate;

@interface YXLotteryJoinView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, YXLotteryTaskInfoCellDelegate>
{
    _Bool _isAnchor;
    YXAudienceLotteryInfoModel *_lotteryInfoModel;
    id <YXLotteryJoinViewDelegate> _delegate;
    UICollectionView *_taskList;
    UIButton *_joinLotteryBtn;
    NSMutableArray *_dataSource;
    UIView *_awardView;
    UIImageView *_awardIconImg;
    UILabel *_awardTitle;
    UILabel *_awardDesLabel;
    UILabel *_lotteryTitle;
    UILabel *_countDownLabel;
    UIImageView *_helpIconImg;
    UIButton *_helpBtn;
    YXLiveTimerNew *_lotteryInfoTimer;
}

@property(retain, nonatomic) YXLiveTimerNew *lotteryInfoTimer; // @synthesize lotteryInfoTimer=_lotteryInfoTimer;
@property(retain, nonatomic) UIButton *helpBtn; // @synthesize helpBtn=_helpBtn;
@property(retain, nonatomic) UIImageView *helpIconImg; // @synthesize helpIconImg=_helpIconImg;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UILabel *lotteryTitle; // @synthesize lotteryTitle=_lotteryTitle;
@property(retain, nonatomic) UILabel *awardDesLabel; // @synthesize awardDesLabel=_awardDesLabel;
@property(retain, nonatomic) UILabel *awardTitle; // @synthesize awardTitle=_awardTitle;
@property(retain, nonatomic) UIImageView *awardIconImg; // @synthesize awardIconImg=_awardIconImg;
@property(retain, nonatomic) UIView *awardView; // @synthesize awardView=_awardView;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIButton *joinLotteryBtn; // @synthesize joinLotteryBtn=_joinLotteryBtn;
@property(retain, nonatomic) UICollectionView *taskList; // @synthesize taskList=_taskList;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) __weak id <YXLotteryJoinViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) YXAudienceLotteryInfoModel *lotteryInfoModel; // @synthesize lotteryInfoModel=_lotteryInfoModel;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)lotteryTaskListCell:(id)arg1 doTasks:(long long)arg2;
- (id)getMMSSFromSS:(long long)arg1;
- (void)timeHandler;
- (void)stopTime;
- (void)startTime;
- (void)joinLottery;
- (void)goViewHelp;
- (void)refreshJoinLotteryView;
- (void)removeObserver;
- (void)addObserver;
- (void)updateJoinLotteryBtnStyle;
- (void)updateGradientLayer;
- (void)updateTimeLabel;
- (void)initConstrains;
- (void)initView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

