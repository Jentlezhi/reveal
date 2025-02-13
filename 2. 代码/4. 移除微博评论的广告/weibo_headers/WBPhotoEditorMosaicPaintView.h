//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class CALayer, CAShapeLayer, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WBPhotoEditorMosaicPaintView : UIImageView
{
    struct CGPoint _prePoint;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _shouldRandom;
    unsigned long long _movePointTotal;
    _Bool _isUsedStyleMosaic;
    _Bool _isUsedStyleBlur;
    _Bool _isUsedStyleBrush;
    _Bool _painted;
    double _paintLineWidth;
    unsigned long long _mosaicType;
    UIImageView *_displayView;
    CDUnknownBlockType _touchBeginBlock;
    CDUnknownBlockType _touchEndBlock;
    CDUnknownBlockType _touchCancelBlock;
    CDUnknownBlockType _oncePanBlock;
    CALayer *_processLayer;
    CALayer *_currentLayer;
    CAShapeLayer *_maskLayer;
    NSMutableArray *_layerArray;
    NSMutableArray *_nowLayerArray;
    struct CGImage *_mosaicRef;
    struct CGImage *_blurRef;
    struct CGImage *_brushRef;
    struct CGPath *_path;
    NSMutableArray *_backParames;
    NSMutableArray *_pathPoint;
    NSMutableArray *_stepImages;
    struct CGSize _firstInputSize;
    struct CGSize _processSize;
    struct CGSize _brushSize;
}

@property(retain, nonatomic) NSMutableArray *stepImages; // @synthesize stepImages=_stepImages;
@property(retain, nonatomic) NSMutableArray *pathPoint; // @synthesize pathPoint=_pathPoint;
@property(retain, nonatomic) NSMutableArray *backParames; // @synthesize backParames=_backParames;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
@property(nonatomic) struct CGSize brushSize; // @synthesize brushSize=_brushSize;
@property(nonatomic) struct CGImage *brushRef; // @synthesize brushRef=_brushRef;
@property(nonatomic) struct CGImage *blurRef; // @synthesize blurRef=_blurRef;
@property(nonatomic) struct CGImage *mosaicRef; // @synthesize mosaicRef=_mosaicRef;
@property(retain, nonatomic) NSMutableArray *nowLayerArray; // @synthesize nowLayerArray=_nowLayerArray;
@property(retain, nonatomic) NSMutableArray *layerArray; // @synthesize layerArray=_layerArray;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *currentLayer; // @synthesize currentLayer=_currentLayer;
@property(retain, nonatomic) CALayer *processLayer; // @synthesize processLayer=_processLayer;
@property(nonatomic) _Bool shouldRandom; // @synthesize shouldRandom=_shouldRandom;
@property(copy, nonatomic) CDUnknownBlockType oncePanBlock; // @synthesize oncePanBlock=_oncePanBlock;
@property(copy, nonatomic) CDUnknownBlockType touchCancelBlock; // @synthesize touchCancelBlock=_touchCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType touchEndBlock; // @synthesize touchEndBlock=_touchEndBlock;
@property(copy, nonatomic) CDUnknownBlockType touchBeginBlock; // @synthesize touchBeginBlock=_touchBeginBlock;
@property(retain, nonatomic) UIImageView *displayView; // @synthesize displayView=_displayView;
@property(nonatomic) struct CGSize processSize; // @synthesize processSize=_processSize;
@property(nonatomic) unsigned long long mosaicType; // @synthesize mosaicType=_mosaicType;
@property(nonatomic) struct CGSize firstInputSize; // @synthesize firstInputSize=_firstInputSize;
@property(nonatomic) double paintLineWidth; // @synthesize paintLineWidth=_paintLineWidth;
@property(nonatomic) _Bool painted; // @synthesize painted=_painted;
@property(nonatomic) _Bool isUsedStyleBrush; // @synthesize isUsedStyleBrush=_isUsedStyleBrush;
@property(nonatomic) _Bool isUsedStyleBlur; // @synthesize isUsedStyleBlur=_isUsedStyleBlur;
@property(nonatomic) _Bool isUsedStyleMosaic; // @synthesize isUsedStyleMosaic=_isUsedStyleMosaic;
- (void).cxx_destruct;
- (id)tintImageWithColor:(id)arg1;
- (void)lastStep;
- (_Bool)hasLastStep;
- (void)setCanEdit:(_Bool)arg1;
- (void)getFinalImageFinishd:(CDUnknownBlockType)arg1;
- (void)clearAll;
- (void)dealloc;
- (double)angleForStartPoint:(struct CGPoint)arg1 EndPoint:(struct CGPoint)arg2;
- (id)colorAtPixel:(struct CGPoint)arg1;
- (void)touchFinishd;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)drawMasoic:(struct CGPoint)arg1 shouldRandom:(_Bool)arg2 angle:(double)arg3 brushSize:(struct CGSize)arg4 backScale:(double)arg5;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)processMosaicImageRefToFinishd:(CDUnknownBlockType)arg1;
- (id)initWithImage:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

