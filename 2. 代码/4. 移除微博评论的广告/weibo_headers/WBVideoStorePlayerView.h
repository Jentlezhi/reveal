//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBMediaAutoPlaySourceViewProvider-Protocol.h"
#import "WBVideoPlayerSourceView-Protocol.h"

@class NSArray, NSDictionary, NSOrderedSet, NSString, UIButton, UIImageView, WBStatus, WBTimelinePageInfo;
@protocol WBMediaAutoPlayProviderDataModel, WBMediaPlaybackItem, WBVideoPlayerSourceView, WBVideoStorePlayerViewEventDelegate;

@interface WBVideoStorePlayerView : UIView <WBVideoPlayerSourceView, WBMediaAutoPlaySourceViewProvider>
{
    id <WBVideoStorePlayerViewEventDelegate> _eventDelegate;
    UIView<WBVideoPlayerSourceView> *_internalSourceView;
    UIImageView *_thumbView;
    UIButton *_playButton;
}

@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) UIView<WBVideoPlayerSourceView> *internalSourceView; // @synthesize internalSourceView=_internalSourceView;
@property(nonatomic) __weak id <WBVideoStorePlayerViewEventDelegate> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *mediaAutoPlaySourceViews;
@property(readonly, nonatomic) NSDictionary *mediaPlaybackExtraLogParameters;
@property(readonly, nonatomic) WBTimelinePageInfo *mediaPlaybackAnalysisPageInfo;
@property(readonly, nonatomic) WBStatus *mediaPlaybackStatus;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
- (id)mediaPlaybackPlaceholderImageURL;
@property(readonly, nonatomic) _Bool supportsInlineMediaPlayback;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> mediaPlaybackItem;
- (void)layoutSubviews;
- (void)_playButtonPressed:(id)arg1;
- (void)_setupViews;
- (id)initWithFrame:(struct CGRect)arg1 sourceView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *mediaAutoPlayContainedSourceViewProviders;
@property(readonly, nonatomic) NSString *mediaAutoPlayContextID;
@property(readonly, nonatomic) id <WBMediaAutoPlayProviderDataModel> mediaAutoPlayDataModel;
@property(readonly, nonatomic) _Bool mediaAutoPlayIgnoresPlaybackItemsPolicy;
@property(readonly, nonatomic) NSDictionary *sourceViewExtraLogParameters;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSOrderedSet *videoPlayer_additionalExternalPluginKeys;
@property(readonly, nonatomic) NSOrderedSet *videoPlayer_additionalExternalPluginKeysForInstreamContent;
@property(readonly, nonatomic) _Bool videoPlayer_clickLogEnable;
@property(readonly, nonatomic) _Bool videoPlayer_disablePresentSimulateAnimation;
@property(readonly, nonatomic) _Bool videoPlayer_disablesAutomaticallyReplay;
@property(readonly, nonatomic) _Bool videoPlayer_disablesResourceCache;
@property(readonly, nonatomic) _Bool videoPlayer_gifVideo;
@property(readonly, nonatomic) long long videoPlayer_mutePreference;
@property(readonly, nonatomic) _Bool videoPlayer_shouldEnterFullScreen;
@property(readonly, nonatomic) _Bool videoPlayer_shouldShowTitle;
@property(readonly, nonatomic) _Bool videoPlayer_shouldUseJumpToParam;
@property(readonly, nonatomic) NSString *videoPlayer_targetScheme;
@property(readonly, nonatomic) _Bool videoPlayer_videoTimelineDisabled;
@property(nonatomic) struct CGRect videoplayer_contentsRect;

@end

