//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CATextLayer, NSArray, NSString, SVGABitmapLayer, SVGAVectorLayer;

@interface SVGAContentLayer : CALayer
{
    _Bool _dynamicHidden;
    NSString *_imageKey;
    CDUnknownBlockType _dynamicDrawingBlock;
    SVGABitmapLayer *_bitmapLayer;
    SVGAVectorLayer *_vectorLayer;
    CATextLayer *_textLayer;
    NSArray *_frames;
}

@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) CATextLayer *textLayer; // @synthesize textLayer=_textLayer;
@property(retain, nonatomic) SVGAVectorLayer *vectorLayer; // @synthesize vectorLayer=_vectorLayer;
@property(retain, nonatomic) SVGABitmapLayer *bitmapLayer; // @synthesize bitmapLayer=_bitmapLayer;
@property(copy, nonatomic) CDUnknownBlockType dynamicDrawingBlock; // @synthesize dynamicDrawingBlock=_dynamicDrawingBlock;
@property(nonatomic) _Bool dynamicHidden; // @synthesize dynamicHidden=_dynamicHidden;
@property(retain, nonatomic) NSString *imageKey; // @synthesize imageKey=_imageKey;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (void)stepToFrame:(long long)arg1;
- (id)initWithFrames:(id)arg1;

@end

