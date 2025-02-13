//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPageCardTrendView2.h"

#import "WBPageCardStoryTrendViewProtocol-Protocol.h"

@class NSString, WBPageCardStoryTrendTagView, WBStoryItem, WBStoryLabel, WBStoryNewFeatureRingView, WBStoryRingView, WBStoryTrendUserView;

@interface WBPageCardStoryTrendView2 : WBPageCardTrendView2 <WBPageCardStoryTrendViewProtocol>
{
    _Bool _loading;
    _Bool _readDone;
    _Bool _blocked;
    WBStoryItem *_item;
    WBStoryTrendUserView *_userView;
    WBStoryRingView *_gradientView;
    WBStoryNewFeatureRingView *_featureGuideView;
    WBStoryLabel *_screenNameLabel;
    WBPageCardStoryTrendTagView *_tagView;
}

@property(retain, nonatomic) WBPageCardStoryTrendTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) WBStoryLabel *screenNameLabel; // @synthesize screenNameLabel=_screenNameLabel;
@property(retain, nonatomic) WBStoryNewFeatureRingView *featureGuideView; // @synthesize featureGuideView=_featureGuideView;
@property(retain, nonatomic) WBStoryRingView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) WBStoryTrendUserView *userView; // @synthesize userView=_userView;
@property(nonatomic) _Bool blocked; // @synthesize blocked=_blocked;
@property(nonatomic) _Bool readDone; // @synthesize readDone=_readDone;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) WBStoryItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)mediaExposureExtraLogParameters;
- (id)mediaExposureItem;
- (unsigned long long)wbvideo_sceneType;
- (id)analysisParamsForOption:(unsigned long long)arg1;
- (id)workingAreaCustomHashID;
- (unsigned long long)observerOptions;
- (void)readStateUpdate;
- (void)updateCellState;
- (void)updateView;
- (void)resetSubViewRects;
- (void)setTrendViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

