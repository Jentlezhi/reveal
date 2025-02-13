//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSMutableArray, NSString, UICollectionView, UIImageView, UILabel, YXLPKPandantResultModel, YXLiveUserView;
@protocol YXLPKPandantCornerResultViewDelegate;

@interface YXLPKPandantCornerResultView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CAAnimationDelegate>
{
    id <YXLPKPandantCornerResultViewDelegate> _delegate;
    unsigned long long _resultStatus;
    UIImageView *_mvpImgView;
    YXLiveUserView *_mvpUserHeadView;
    UILabel *_mvpNameLabel;
    UILabel *_mvpValueLabel;
    UIImageView *_levelImgView;
    UIImageView *_resultImgView;
    UIView *_progressView;
    UIImageView *_leftProgressView;
    UILabel *_scoreLabel;
    UICollectionView *_recordCollection;
    NSMutableArray *_dataSource;
    YXLPKPandantResultModel *_resultModel;
    UIImageView *_bgImgView;
    UIView *_resultInfoView;
    UIView *_mvpView;
}

@property(retain, nonatomic) UIView *mvpView; // @synthesize mvpView=_mvpView;
@property(retain, nonatomic) UIView *resultInfoView; // @synthesize resultInfoView=_resultInfoView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(retain, nonatomic) YXLPKPandantResultModel *resultModel; // @synthesize resultModel=_resultModel;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *recordCollection; // @synthesize recordCollection=_recordCollection;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UIImageView *leftProgressView; // @synthesize leftProgressView=_leftProgressView;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIImageView *resultImgView; // @synthesize resultImgView=_resultImgView;
@property(retain, nonatomic) UIImageView *levelImgView; // @synthesize levelImgView=_levelImgView;
@property(retain, nonatomic) UILabel *mvpValueLabel; // @synthesize mvpValueLabel=_mvpValueLabel;
@property(retain, nonatomic) UILabel *mvpNameLabel; // @synthesize mvpNameLabel=_mvpNameLabel;
@property(retain, nonatomic) YXLiveUserView *mvpUserHeadView; // @synthesize mvpUserHeadView=_mvpUserHeadView;
@property(retain, nonatomic) UIImageView *mvpImgView; // @synthesize mvpImgView=_mvpImgView;
@property(nonatomic) unsigned long long resultStatus; // @synthesize resultStatus=_resultStatus;
@property(nonatomic) __weak id <YXLPKPandantCornerResultViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)showResultStatusWithResultModel:(id)arg1 resultStatus:(unsigned long long)arg2;
- (void)sortDataSourceWith:(id)arg1;
- (id)getHonourScoreWith:(long long)arg1;
- (id)setResultInfoItem:(long long)arg1 itemKey:(id)arg2 isOptional:(_Bool)arg3;
- (void)mvpViewIsFinish;
- (void)showMVPView;
- (void)setProgressValue:(double)arg1 nextLevelScore:(double)arg2;
- (id)getScoreTextWithNumber:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)levelImgViewTransformAnimation;
- (void)mvpViewUpdateConstraints;
- (void)resultInfoViewUpdateConstraints;
- (void)viewUpdateConstraints;
- (void)initMvpView;
- (void)initResultInfoView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

