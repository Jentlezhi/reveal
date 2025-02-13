//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "WBFAVPlayerLayer-Protocol.h"
#import "WBFPlayerInternalDelegate-Protocol.h"

@class NSDictionary, NSString, WBFInternalVideoContainerLayer, WBFPlayer;
@protocol WBFInternalDisplayEngine;

@interface WBFPlayerLayer : CALayer <WBFPlayerInternalDelegate, WBFAVPlayerLayer>
{
    CALayer<WBFInternalDisplayEngine> *_videoLayer;
    WBFInternalVideoContainerLayer *_videoContainerLayer;
    struct {
        unsigned int deallocing:1;
    } _flags;
    _Bool _clearsContentsOnPlayerChange;
    _Bool _readyForDisplay;
    NSString *_videoGravity;
    WBFPlayer *_player;
    struct CGRect _videoContentsRect;
}

+ (_Bool)dynamicLayerResetEnabled;
+ (_Bool)metalRenderingEnabled;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(retain, nonatomic) WBFPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool clearsContentsOnPlayerChange; // @synthesize clearsContentsOnPlayerChange=_clearsContentsOnPlayerChange;
@property(nonatomic) struct CGRect videoContentsRect; // @synthesize videoContentsRect=_videoContentsRect;
@property(copy) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extraLoggingData;
@property(readonly, nonatomic) double mostRecentRenderTimestamp;
@property(readonly, nonatomic) _Bool animatesVideoGravityAutomatically;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)updateVideoRectLegacy;
- (void)updateVideoRect;
- (struct CGSize)currentPresentationSize;
- (void)setBounds:(struct CGRect)arg1;
- (void)player:(id)arg1 didUpdateCurrentItem:(id)arg2;
- (void)player:(id)arg1 didUpdatePresentationSize:(struct CGSize)arg2;
- (void)playerDidRenderFirstFrame:(id)arg1;
- (void)didResetPlayerPropertiesWithPlayer:(id)arg1;
- (void)willResetPlayerPropertiesWithPlayer:(id)arg1;
- (void)teardownCurrentItem;
- (void)setupCurrentItem;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)_resetVideoLayer;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

