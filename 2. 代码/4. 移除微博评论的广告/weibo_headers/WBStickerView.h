//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, WBStickerInteractionParameter;
@protocol WBStickerViewDelegate;

@interface WBStickerView : UIView <UIGestureRecognizerDelegate>
{
    double _scale;
    double _arg;
    struct CGPoint _initialPoint;
    double _pinchScale;
    double _initialArg;
    UIButton *_deleteButton;
    UIButton *_scaleButton;
    double _initialScale;
    double _borderWidth;
    _Bool _editable;
    _Bool _isTextSticker;
    _Bool _isStaticDateTextSticker;
    NSString *_stickerID;
    UIImageView *_imageView;
    NSArray *_gifImages;
    id <WBStickerViewDelegate> _delegate;
    double _frameRate;
    WBStickerInteractionParameter *_interactionParameter;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    UIPanGestureRecognizer *_scaleGesture;
    struct CGSize _originScreenImageSize;
}

+ (struct CGPoint)endPosOffset;
+ (struct CGPoint)startPosOffset;
@property(retain, nonatomic) UIPanGestureRecognizer *scaleGesture; // @synthesize scaleGesture=_scaleGesture;
@property(retain, nonatomic) UIRotationGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool isStaticDateTextSticker; // @synthesize isStaticDateTextSticker=_isStaticDateTextSticker;
@property(nonatomic) _Bool isTextSticker; // @synthesize isTextSticker=_isTextSticker;
@property(retain, nonatomic) WBStickerInteractionParameter *interactionParameter; // @synthesize interactionParameter=_interactionParameter;
@property(readonly, nonatomic) struct CGSize originScreenImageSize; // @synthesize originScreenImageSize=_originScreenImageSize;
@property(nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) __weak id <WBStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *gifImages; // @synthesize gifImages=_gifImages;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSString *stickerID; // @synthesize stickerID=_stickerID;
- (void).cxx_destruct;
- (float)getDashLayerLineWidthDependingDevice;
- (void)stopGIF;
- (_Bool)isGIFAnimating;
- (void)playGIF;
- (void)circleViewDidPan:(id)arg1;
- (_Bool)rectVerticesContentInRect:(struct CGRect)arg1 size:(struct CGSize)arg2 center:(struct CGPoint)arg3 ratio:(double)arg4;
- (double)getRotateAngleFromAffineTransform:(struct CGAffineTransform)arg1;
- (void)moveToCenterIfNeed;
- (void)viewDidPan:(id)arg1;
- (void)viewDidTap:(id)arg1;
- (void)setScale:(double)arg1;
- (void)rotation:(id)arg1;
- (void)pushedDeleteBtn:(id)arg1;
- (void)pinch:(id)arg1;
- (void)setAngle:(double)arg1;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)initGestures;
- (id)initWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
- (id)initWithAnimationImages:(id)arg1 screenImageSize:(struct CGSize)arg2;
- (struct CGPoint)endPosOffset;
- (struct CGPoint)startPosOffset;
- (struct CGSize)originOffset;
- (id)initWithImage:(id)arg1 screenImageSize:(struct CGSize)arg2;
- (void)clear;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

