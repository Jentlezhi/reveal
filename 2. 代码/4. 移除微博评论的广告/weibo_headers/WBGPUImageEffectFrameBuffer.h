//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, WBGPUImageEffectFrameBufferCache;

@interface WBGPUImageEffectFrameBuffer : NSObject
{
    struct WBGPUImageFramebuffer *_frameBuffer;
    unsigned int _externalTexture;
    struct CGSize _externalSize;
    WBGPUImageEffectFrameBufferCache *_weakFrameBufferCache;
}

@property(nonatomic) __weak WBGPUImageEffectFrameBufferCache *weakFrameBufferCache; // @synthesize weakFrameBufferCache=_weakFrameBufferCache;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)setExternalSize:(struct CGSize)arg1;
- (_Bool)getFastUpload;
- (struct CGSize)getSize;
- (struct __CVBuffer *)getPixelBuffer;
- (void)setExternalTexture:(unsigned int)arg1;
- (unsigned int)getTexture;
- (void)setFrameHandler:(void *)arg1;
- (void *)getFrameHandler;
- (void)dealloc;
- (id)initWithFrameHandler:(void *)arg1 cache:(id)arg2;
- (id)init;
@property(copy, nonatomic) NSDictionary *extInfo;
@property(nonatomic) struct __CVBuffer *extPixelBuffer;

@end

