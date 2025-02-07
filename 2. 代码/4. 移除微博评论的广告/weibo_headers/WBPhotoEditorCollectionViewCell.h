//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "CAAnimationDelegate-Protocol.h"
#import "WBImageTagView2Delegate-Protocol.h"
#import "WBPhotoEditorStickerOverlayViewDelegate-Protocol.h"
#import "WBStickerViewDelegate-Protocol.h"

@class DACircularProgressView, NSMutableArray, NSString, UIImageView, UIView, WBImageEditorCache, WBPhotoEditorStickerOverlayView, WBPhotoEditorTagOverlayView, WBProgressHUD;
@protocol WBPhotoEditorCollectionViewCellDelegate;

@interface WBPhotoEditorCollectionViewCell : UICollectionViewCell <WBStickerViewDelegate, WBPhotoEditorStickerOverlayViewDelegate, WBImageTagView2Delegate, CAAnimationDelegate>
{
    long long loadingFailedImageCount;
    UIView *topBorderView_;
    UIView *bottomBorderView_;
    UIView *leftBorderView_;
    UIView *rightBorderView_;
    WBImageEditorCache *cache_;
    WBProgressHUD *errorTips;
    UIImageView *_imageView;
    WBPhotoEditorTagOverlayView *_tagOverlay;
    WBPhotoEditorStickerOverlayView *_stickerOverlay;
    NSMutableArray *_stickerViews;
    UIImageView *_productIconimageView;
    id <WBPhotoEditorCollectionViewCellDelegate> _delegate;
    NSString *_currentDisplayIdentifier;
    NSMutableArray *_tagViews;
    DACircularProgressView *_progressView;
    UIImageView *_progressBgImageView;
}

+ (id)displayImageForImageCache:(id)arg1 withTramsform:(_Bool)arg2;
+ (id)displayIdentifierForImageCache:(id)arg1;
+ (double)CellPadding;
@property(retain, nonatomic) UIImageView *progressBgImageView; // @synthesize progressBgImageView=_progressBgImageView;
@property(retain, nonatomic) DACircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSMutableArray *tagViews; // @synthesize tagViews=_tagViews;
@property(copy, nonatomic) NSString *currentDisplayIdentifier; // @synthesize currentDisplayIdentifier=_currentDisplayIdentifier;
@property(nonatomic) __weak id <WBPhotoEditorCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImageView *productIconimageView; // @synthesize productIconimageView=_productIconimageView;
@property(readonly, nonatomic) NSMutableArray *stickerViews; // @synthesize stickerViews=_stickerViews;
@property(retain, nonatomic) WBPhotoEditorStickerOverlayView *stickerOverlay; // @synthesize stickerOverlay=_stickerOverlay;
@property(retain, nonatomic) WBPhotoEditorTagOverlayView *tagOverlay; // @synthesize tagOverlay=_tagOverlay;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)showTips:(id)arg1;
- (void)hideProgressView;
- (void)updateImageElementViewByNewImage:(id)arg1 andUrl:(id)arg2;
- (double)maxWidthForImageTagView:(id)arg1;
- (void)stickerTapedBlankSpace:(id)arg1;
- (void)stickerDeleted:(id)arg1;
- (void)stickerFinishedEditing:(id)arg1;
- (void)stickerViewDidTapped:(id)arg1;
- (void)stickerBecomeActiveByUser:(id)arg1;
- (struct CGRect)stickerViewDisplayRect;
- (void)stickerViewDidTouchEnd:(id)arg1;
- (void)stickerViewDidTouchBegin:(id)arg1;
- (double)getRotateAngleFromAffineTransform:(struct CGAffineTransform)arg1;
- (void)stickerStartedEditing:(id)arg1;
- (void)displayTagWithImageCache:(id)arg1;
- (void)initDefaultStickerFrameWithImageScreenRect:(struct CGRect)arg1 stickerImageSize:(struct CGSize)arg2 resultSize:(struct CGSize *)arg3 resultCenter:(struct CGPoint *)arg4 startPointOffset:(struct CGPoint)arg5 endPointOffset:(struct CGPoint)arg6;
- (void)initEditedStickerFrameWithImageScreenRect:(struct CGRect)arg1 resultSize:(struct CGSize *)arg2 resultCenter:(struct CGPoint *)arg3 startPointOffset:(struct CGPoint)arg4 endPointOffset:(struct CGPoint)arg5 parame:(id)arg6;
- (void)initServerStickerFrameWithImageViewScreenRect:(struct CGRect)arg1 stickerImageSize:(struct CGSize)arg2 resultSize:(struct CGSize *)arg3 resultCenter:(struct CGPoint *)arg4 startPointOffset:(struct CGPoint)arg5 endPointOffset:(struct CGPoint)arg6 parame:(id)arg7;
- (id)createStickerWithDefaultData:(id)arg1 image:(id)arg2;
- (double)getRandomNumber:(double)arg1 to:(double)arg2;
- (struct CGPoint)randomPointWithBoardSize:(struct CGSize)arg1 stickerSize:(struct CGSize)arg2;
- (id)createStickerWithEditData:(id)arg1 image:(id)arg2;
- (double)adjustStickerBoardVitureHeight;
- (id)createStickerWithServerData:(id)arg1 image:(id)arg2;
- (id)createGIFStickerWithEditData:(id)arg1 stickers:(id)arg2;
- (id)createGIFStickerWithServerData:(id)arg1 parame:(id)arg2 stickers:(id)arg3;
- (_Bool)addStickerWithParame:(id)arg1 withCache:(id)arg2;
- (void)addTextStickerWithParame:(id)arg1 withCache:(id)arg2;
- (void)addStaticDateStickerWithParame:(id)arg1 withCache:(id)arg2;
- (void)adjustmentStickersHierarchy;
- (_Bool)displayStickerWithImageCache:(id)arg1;
- (void)cellWillDisappear;
- (void)cellWillAppear;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showVersaEffectImage;
- (void)displayImage:(id)arg1;
- (void)checkFinish:(long long)arg1;
- (void)displayImageCache:(id)arg1 withSync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)displayImageCache:(id)arg1 withSync:(_Bool)arg2;
- (void)updateView;
- (struct CGRect)imageFrameInImageView;
- (struct CGRect)imageRealFrame;
- (struct CGRect)imageFrame;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)showOriginalImage:(_Bool)arg1;
- (void)dealloc;
- (void)setMaskViewBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)addStickerView:(id)arg1;
- (_Bool)stickerViewBecomeActiveWithTouchPoint:(struct CGPoint)arg1;
- (_Bool)hasActiveStickerView;
- (id)stickerViewWithTouchPoint:(struct CGPoint)arg1;
- (void)updateActiveStatus;
- (void)removeAllStickerActiveStatus;
- (void)removeAllTagActiveStatus;
- (void)removeAllSticker;
- (id)allStickerView;
- (id)imageEditorCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

