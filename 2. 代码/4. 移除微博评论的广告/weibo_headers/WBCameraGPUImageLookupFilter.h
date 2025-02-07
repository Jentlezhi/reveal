//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBCameraVideoFilterProtocol-Protocol.h"
#import "WBCameraVideoLookupFilterProtocol-Protocol.h"
#import "WBGPUImageEffectDelegate-Protocol.h"

@class NSString, WBCameraFilterStatisticModel, WBGPUImageLookupFilter, WBGPUImagePixelBuffer2Texture;
@protocol WBCameraVideoFilterDelegate;

@interface WBCameraGPUImageLookupFilter : NSObject <WBGPUImageEffectDelegate, WBCameraVideoFilterProtocol, WBCameraVideoLookupFilterProtocol>
{
    id <WBCameraVideoFilterDelegate> _filterDelegate;
    WBGPUImageLookupFilter *_lookupFilter;
    WBCameraFilterStatisticModel *_statisticModel;
    double _currentPreferredRotation;
    WBGPUImagePixelBuffer2Texture *_pixelBuffer2Texture;
    struct CGSize _filterOutSize;
}

@property(retain, nonatomic) WBGPUImagePixelBuffer2Texture *pixelBuffer2Texture; // @synthesize pixelBuffer2Texture=_pixelBuffer2Texture;
@property(nonatomic) double currentPreferredRotation; // @synthesize currentPreferredRotation=_currentPreferredRotation;
@property(retain, nonatomic) WBCameraFilterStatisticModel *statisticModel; // @synthesize statisticModel=_statisticModel;
@property(retain, nonatomic) WBGPUImageLookupFilter *lookupFilter; // @synthesize lookupFilter=_lookupFilter;
@property(nonatomic) struct CGSize filterOutSize; // @synthesize filterOutSize=_filterOutSize;
@property(nonatomic) __weak id <WBCameraVideoFilterDelegate> filterDelegate; // @synthesize filterDelegate=_filterDelegate;
- (void).cxx_destruct;
- (id)getImageWithFilterEffect:(id)arg1;
- (void)updateLookUpRenderPercent:(double)arg1 leftLookupIndex:(unsigned long long)arg2 rightLookupIndex:(unsigned long long)arg3;
- (void)setPreferredRotation:(float)arg1;
- (void)cleanStatisticModel;
- (id)getStatisticModel;
@property(nonatomic) struct CGSize outSize;
@property(nonatomic) __weak id <WBCameraVideoFilterDelegate> delegate;
- (void)setInputPixelBuffer:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2;
- (struct CGSize)getSizeApplySAR:(struct __CVBuffer *)arg1;
- (void)setInputTextureId:(int)arg1 inputSize:(struct CGSize)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)effectErrorCodeNotify:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

