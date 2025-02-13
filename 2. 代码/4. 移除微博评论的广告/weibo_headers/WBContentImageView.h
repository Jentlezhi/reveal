//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBRoundedImageView.h"

#import "WBDynamicViewProtocol-Protocol.h"
#import "WBImageViewGifDelegate-Protocol.h"

@class DynamicNode, NSMutableArray, NSObject, NSString, UIImage, UIImageView, UILabel, WBImageLoadingProgressView, WBImageView;
@protocol OS_dispatch_queue, WBContentImageViewGifDelegate;

@interface WBContentImageView : WBRoundedImageView <WBDynamicViewProtocol, WBImageViewGifDelegate>
{
    int _loadState;
    _Bool loaded;
    _Bool ignoreImageMask;
    NSString *imageUrl;
    NSString *flagImageUrl;
    UIImageView *flagImageView;
    CDUnknownBlockType buildAlternativeImageUrlsBlock;
    CDUnknownBlockType imageDidBeginDownloadBlock;
    CDUnknownBlockType imageDidFinishDownloadBlock;
    CDUnknownBlockType imageDidFinishLoadFromDiskBlock;
    CDUnknownBlockType imageDidFinishSaveToDiskBlock;
    _Bool isAnimationWhenFinalImageReceived;
    WBImageLoadingProgressView *progressView;
    NSMutableArray *photoTagViews;
    WBImageView *gifImageView;
    _Bool imageLoaded;
    _Bool imageChangedAfterFadeinAnimation;
    _Bool _showDownloadProgress;
    _Bool autoPlayGifIfReady;
    _Bool allowPlayGif;
    _Bool _clearsLayerContentsWhenViewDisappear;
    _Bool _placeFlagImgOutside;
    _Bool _usesSyncLoad;
    UIImage *failedPlaceholder;
    long long purposeType;
    CDUnknownBlockType _configRequestBlock;
    NSObject<OS_dispatch_queue> *_imageLoadQueue;
    id <WBContentImageViewGifDelegate> _gifDelegate;
    NSString *_currentReadingTaskKey;
    UILabel *_maskTitleLabel;
    NSString *_maskTitle;
    UIImageView *_livePhotoImageView;
    UIImageView *_paidIconView;
}

+ (void)initialize;
+ (id)dynamicViewWithNode:(id)arg1;
+ (unsigned long long)dynamicViewIdentifierTag;
+ (void)initDynamicViewSupport;
@property(retain, nonatomic) UIImageView *paidIconView; // @synthesize paidIconView=_paidIconView;
@property(retain, nonatomic) UIImageView *livePhotoImageView; // @synthesize livePhotoImageView=_livePhotoImageView;
@property(copy, nonatomic) NSString *maskTitle; // @synthesize maskTitle=_maskTitle;
@property(retain, nonatomic) UILabel *maskTitleLabel; // @synthesize maskTitleLabel=_maskTitleLabel;
@property(retain) NSString *currentReadingTaskKey; // @synthesize currentReadingTaskKey=_currentReadingTaskKey;
@property(nonatomic) __weak id <WBContentImageViewGifDelegate> gifDelegate; // @synthesize gifDelegate=_gifDelegate;
@property(nonatomic) int loadState; // @synthesize loadState=_loadState;
@property(nonatomic) _Bool usesSyncLoad; // @synthesize usesSyncLoad=_usesSyncLoad;
@property(nonatomic) NSObject<OS_dispatch_queue> *imageLoadQueue; // @synthesize imageLoadQueue=_imageLoadQueue;
@property(nonatomic) _Bool placeFlagImgOutside; // @synthesize placeFlagImgOutside=_placeFlagImgOutside;
@property(nonatomic) _Bool clearsLayerContentsWhenViewDisappear; // @synthesize clearsLayerContentsWhenViewDisappear=_clearsLayerContentsWhenViewDisappear;
@property(copy, nonatomic) CDUnknownBlockType configRequestBlock; // @synthesize configRequestBlock=_configRequestBlock;
@property(nonatomic) long long purposeType; // @synthesize purposeType;
@property(nonatomic) _Bool allowPlayGif; // @synthesize allowPlayGif;
@property(nonatomic) _Bool autoPlayGifIfReady; // @synthesize autoPlayGifIfReady;
@property(nonatomic) _Bool showDownloadProgress; // @synthesize showDownloadProgress=_showDownloadProgress;
@property(retain, nonatomic) UIImage *failedPlaceholder; // @synthesize failedPlaceholder;
@property(nonatomic) _Bool imageChangedAfterFadeinAnimation; // @synthesize imageChangedAfterFadeinAnimation;
@property(readonly, nonatomic) NSString *flagImageUrl; // @synthesize flagImageUrl;
@property(nonatomic) _Bool isAnimationWhenFinalImageReceived; // @synthesize isAnimationWhenFinalImageReceived;
@property(copy, nonatomic) CDUnknownBlockType imageDidFinishSaveToDiskBlock; // @synthesize imageDidFinishSaveToDiskBlock;
@property(copy, nonatomic) CDUnknownBlockType imageDidBeginDownloadBlock; // @synthesize imageDidBeginDownloadBlock;
@property(copy, nonatomic) CDUnknownBlockType imageDidFinishLoadFromDiskBlock; // @synthesize imageDidFinishLoadFromDiskBlock;
@property(copy, nonatomic) CDUnknownBlockType imageDidFinishDownloadBlock; // @synthesize imageDidFinishDownloadBlock;
@property(copy, nonatomic) CDUnknownBlockType buildAlternativeImageUrlsBlock; // @synthesize buildAlternativeImageUrlsBlock;
@property(nonatomic) _Bool ignoreImageMask; // @synthesize ignoreImageMask;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)pauseAnimation;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)imageDrawingFinished;
- (void)setImageLoaderImage:(id)arg1 url:(id)arg2;
- (void)setFinalFlagImage:(id)arg1;
- (void)setFinalImage:(id)arg1 isGIf:(_Bool)arg2;
- (void)setFinalImage:(id)arg1;
- (void)changePlaceholderImage:(id)arg1;
- (void)cancelCurrentImageLoading;
- (void)setContentMode:(long long)arg1;
- (void)wbImageView:(id)arg1 gifPlayStatusChange:(long long)arg2;
- (void)setGifImage:(id)arg1 loopCount:(unsigned long long)arg2 stopAtLastFrame:(_Bool)arg3;
- (void)setGifImage:(id)arg1;
- (void)loadImageWithPath:(id)arg1 localCacheFileAsyncFirst:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)reloadUIElements;
- (void)setMaskTitle:(id)arg1 font:(id)arg2 textColor:(id)arg3 maskColor:(id)arg4;
- (void)setFlagTitle:(id)arg1 font:(id)arg2 textColor:(id)arg3;
- (void)setFlagUrl:(id)arg1;
- (void)setImageUrl:(id)arg1 flagImageUrl:(id)arg2 placeholderImage:(id)arg3 localCacheFileAsyncFirst:(_Bool)arg4;
- (void)setImageUrl:(id)arg1 flagImageUrl:(id)arg2 placeholderImage:(id)arg3;
- (void)setImageUrl:(id)arg1 flagImageUrl:(id)arg2;
- (void)setImageUrl:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageUrl:(id)arg1;
@property(readonly, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
- (id)currentDisplayImage;
- (void)offsetFlagImageViewPos:(struct CGSize)arg1;
- (void)resetMaskColor;
- (void)setBorderWidth:(double)arg1;
- (void)markAsLoaded;
- (void)setImage:(id)arg1;
- (void)hiddenPaidIconView;
- (void)showPaidIconView;
- (_Bool)hiddenFlagImageView;
- (void)setHiddenFlagImageView:(_Bool)arg1;
- (_Bool)redrawsAutomaticallyWhenStateChange;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) _Bool imageLoaded; // @synthesize imageLoaded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)configViewWithNode:(id)arg1;
- (id)dy_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) DynamicNode *viewNode;
- (void)mm_setRoundRectImageWithURL:(id)arg1 placeholder:(id)arg2 cropSize:(struct CGSize)arg3;
- (void)loadImageWithImageUrl:(id)arg1 placeholderImage:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

