//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WB360ImageViewDelegate-Protocol.h"
#import "WB360MediaCameraControllerDelegate-Protocol.h"
#import "WBMediaPlaybackControlling-Protocol.h"

@class NSString, UITapGestureRecognizer, UIView, WB360GyroIndicatorView, WB360HeadingIndicatorView, WB360ImageContainerView, WB360ImageFullScreenViewController, WB360ImagePlaybackLog, WB360ImagePlaybackView, WB360MediaCameraController, WB360PhoneIndicatorView;
@protocol WBMediaPlaybackItem, WBMediaPlaybackSourceView;

@interface WB360ImagePlaybackController : NSObject <WB360MediaCameraControllerDelegate, WB360ImageViewDelegate, UIGestureRecognizerDelegate, WBMediaPlaybackControlling>
{
    _Bool _transitioningFullScreen;
    _Bool _pendingTextureUpdatingToStartPlaying;
    _Bool _tableViewScrolling;
    _Bool _containerViewHidden;
    long long _playbackState;
    WB360ImageContainerView *_containerView;
    WB360ImagePlaybackView *_panoramaView;
    WB360HeadingIndicatorView *_headingIndicator;
    WB360GyroIndicatorView *_loadingIndicator;
    WB360PhoneIndicatorView *_phoneIndicator;
    WB360MediaCameraController *_cameraController;
    UIView<WBMediaPlaybackSourceView> *_sourceView;
    id <WBMediaPlaybackItem> _playbackItem;
    WB360ImageFullScreenViewController *_fullScreenController;
    UITapGestureRecognizer *_singleRecognizer;
    UITapGestureRecognizer *_doubleTapRecognizer;
    WB360ImagePlaybackLog *_playbackLog;
}

@property(retain, nonatomic) WB360ImagePlaybackLog *playbackLog; // @synthesize playbackLog=_playbackLog;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *singleRecognizer; // @synthesize singleRecognizer=_singleRecognizer;
@property(nonatomic) _Bool containerViewHidden; // @synthesize containerViewHidden=_containerViewHidden;
@property(retain, nonatomic) WB360ImageFullScreenViewController *fullScreenController; // @synthesize fullScreenController=_fullScreenController;
@property(retain, nonatomic) id <WBMediaPlaybackItem> playbackItem; // @synthesize playbackItem=_playbackItem;
@property(retain, nonatomic) UIView<WBMediaPlaybackSourceView> *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) WB360MediaCameraController *cameraController; // @synthesize cameraController=_cameraController;
@property(retain, nonatomic) WB360PhoneIndicatorView *phoneIndicator; // @synthesize phoneIndicator=_phoneIndicator;
@property(retain, nonatomic) WB360GyroIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) WB360HeadingIndicatorView *headingIndicator; // @synthesize headingIndicator=_headingIndicator;
@property(retain, nonatomic) WB360ImagePlaybackView *panoramaView; // @synthesize panoramaView=_panoramaView;
@property(retain, nonatomic) WB360ImageContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) _Bool tableViewScrolling; // @synthesize tableViewScrolling=_tableViewScrolling;
- (void).cxx_destruct;
- (id)_errorWithReason:(long long)arg1;
- (id)_reasonForErrorCode:(long long)arg1;
- (void)_commitCurrentPlaybackLogWithError:(id)arg1;
- (void)playbackDidFinishWithError:(id)arg1;
- (void)playbackDidBeginWithPlayReason:(long long)arg1;
- (void)cameraControllerDidPerformSignificantUserChanges:(id)arg1;
- (void)cameraController:(id)arg1 didPinchWithZoomDelta:(double)arg2;
- (void)cameraControllerDidBeginPinchGesture:(id)arg1;
- (void)cameraController:(id)arg1 didPanWithDelta:(struct CGPoint)arg2;
- (void)cameraControllerDidBeginPanGesture:(id)arg1;
- (void)cameraController:(id)arg1 didUpdateZoomScale:(double)arg2;
- (void)cameraController:(id)arg1 didUpdateHeading:(double)arg2 pitch:(double)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)hidePhoneIndicator;
- (void)showPhoneIndicator;
- (void)panoramaImageViewDidFinishUpdatingTexture:(id)arg1;
- (void)exitFullScreen;
- (void)enterFullScreen;
- (void)panoramaViewDidPressed;
- (void)headingIndicatorPressed:(id)arg1;
- (void)_updateContainerViewVisibilityScrollingChanged:(_Bool)arg1 stateChanged:(_Bool)arg2;
@property(readonly, nonatomic) _Bool mediaPlaybackViewAttachedToSourceView;
@property(readonly, nonatomic) id <WBMediaPlaybackItem> currentPlaybackItem;
@property(readonly, nonatomic) UIView *view;
- (_Bool)finishMediaPlayback;
- (void)_decideURLForPanoramaPicture:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_downloadImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)startMediaPlaybackWithPlaybackItem:(id)arg1 sourceView:(id)arg2 reason:(long long)arg3;
- (void)_updateHeadingScale;
- (void)viewWillLayoutSubViews;
- (void)_transitionToState:(long long)arg1 fromState:(long long)arg2;
@property(readonly, nonatomic) _Bool fullScreen;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

