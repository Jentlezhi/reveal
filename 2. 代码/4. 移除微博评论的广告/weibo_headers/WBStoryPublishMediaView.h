//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "WBStoryEditContainerViewDelegate-Protocol.h"
#import "WBStoryFilterOverlayViewDelegate-Protocol.h"

@class NSString, PHImageRequestOptions, WBMediaEditorCache, WBStoryFilterOverlayView, WBStoryFullScreenDarkGradientView, WBStoryProgressHUD, WBStoryRingView, WBStoryStickersScrollView, WBVideoEditor;
@protocol WBStoryEditContainerViewProtocol, WBStoryMediaCache, WBStoryPublishMediaViewDelegate;

@interface WBStoryPublishMediaView : UIView <UIScrollViewDelegate, WBStoryEditContainerViewDelegate, WBStoryFilterOverlayViewDelegate>
{
    struct {
        unsigned int isAdjusting:1;
    } _flags;
    _Bool _shouldPlayNow;
    _Bool _needUpdateImage;
    UIView<WBStoryEditContainerViewProtocol> *_editView;
    WBVideoEditor *_editor;
    WBMediaEditorCache<WBStoryMediaCache> *_mediaCache;
    id <WBStoryPublishMediaViewDelegate> _delegate;
    long long _pageNum;
    long long _nextPageNum;
    NSString *_uuid;
    WBStoryRingView *_loadingView;
    WBStoryProgressHUD *_progressHUD;
    WBStoryStickersScrollView *_scrollView;
    WBStoryFullScreenDarkGradientView *_topGradientView;
    WBStoryFullScreenDarkGradientView *_bottomGradientView;
    WBStoryFilterOverlayView *_filterView;
    PHImageRequestOptions *_asyncOptions;
    PHImageRequestOptions *_syncOptions;
}

@property(retain, nonatomic) PHImageRequestOptions *syncOptions; // @synthesize syncOptions=_syncOptions;
@property(retain, nonatomic) PHImageRequestOptions *asyncOptions; // @synthesize asyncOptions=_asyncOptions;
@property(nonatomic, getter=isNeedUpdateImage) _Bool needUpdateImage; // @synthesize needUpdateImage=_needUpdateImage;
@property(retain, nonatomic) WBStoryFilterOverlayView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) WBStoryFullScreenDarkGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) WBStoryFullScreenDarkGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) WBStoryStickersScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) WBStoryProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(nonatomic) __weak WBStoryRingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) long long nextPageNum; // @synthesize nextPageNum=_nextPageNum;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) _Bool shouldPlayNow; // @synthesize shouldPlayNow=_shouldPlayNow;
@property(nonatomic) __weak id <WBStoryPublishMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBMediaEditorCache<WBStoryMediaCache> *mediaCache; // @synthesize mediaCache=_mediaCache;
@property(retain, nonatomic) WBVideoEditor *editor; // @synthesize editor=_editor;
@property(retain, nonatomic) UIView<WBStoryEditContainerViewProtocol> *editView; // @synthesize editView=_editView;
- (void).cxx_destruct;
- (id)commonLogDict;
- (void)filterDismiss;
- (void)storyFilterOverlay:(id)arg1 selectedFilterType:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)hideCurrentFilterName;
- (void)showCurrentFilterName;
- (void)editContainerView:(id)arg1 didTapTextSticker:(id)arg2;
- (void)editContainerViewDidTapBlankArea:(id)arg1;
- (void)editContainerViewDidFinishEditing:(id)arg1;
- (void)editContainerViewDidStartEditing:(id)arg1;
- (void)editContainerViewDidFinishPainting:(id)arg1;
- (void)editContainerViewDidStartPainting:(id)arg1;
- (void)editContainerViewDidSwipeUp:(id)arg1;
- (void)setMusicVolume:(double)arg1;
- (void)setVideoVolume:(double)arg1;
- (void)setMute:(_Bool)arg1;
- (void)updateBackgroundMusic;
- (void)showFilterChoose;
- (void)delegateFailure;
- (void)removeSticker:(id)arg1;
- (void)addSticker:(id)arg1;
- (void)startPainting;
- (void)pause;
- (void)resume;
- (void)keyWindowDidChange:(id)arg1;
- (void)audioRouteDidChange:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)didFinishLoadingAsset;
- (void)didStartLoadingAsset;
- (void)resumeDraft:(id)arg1;
- (void)setCurrentFilter:(unsigned long long)arg1;
- (void)updateMediaCache:(id)arg1;
- (void)updateTimeline;
- (void)processVideoCache:(id)arg1;
- (void)processImage:(id)arg1 filterType:(unsigned long long)arg2;
- (void)updateFilterType:(unsigned long long)arg1;
- (id)contactsLayoutArray;
- (id)stickersDict;
- (id)stickersImage;
- (struct CGSize)thumbnialSize;
- (struct CGSize)imageSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

