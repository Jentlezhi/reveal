//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBXMixRenderView.h"

#import "WBVideoPlayerSourceView-Protocol.h"

@class NSDictionary, NSOrderedSet, NSString, WBStatus, WBTimelinePageInfo, WBVideoItem;
@protocol WBMediaPlaybackItem;

@interface WBXVideoView : WBXMixRenderView <WBVideoPlayerSourceView>
{
    WBVideoItem *_item;
}

@property(nonatomic) __weak WBVideoItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)videoPlayer_validatePlugin:(id)arg1;
@property(readonly, nonatomic) WBStatus *mediaPlaybackStatus;
- (id)mediaAutoPlaySourceViews;
- (id)mediaPlaybackPlaceholderWithLoadedStatus:(_Bool *)arg1;
- (id)mediaPlaybackPlaceholderImageURL;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> mediaPlaybackItem;
@property(readonly, nonatomic) _Bool supportsInlineMediaPlayback;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *mediaAutoPlayContextID;
@property(readonly, nonatomic) _Bool mediaAutoPlayIgnoresPlaybackItemsPolicy;
@property(readonly, nonatomic) WBTimelinePageInfo *mediaPlaybackAnalysisPageInfo;
@property(readonly, nonatomic) NSDictionary *mediaPlaybackExtraLogParameters;
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

