//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CKEffectOutput.h"

#import "WBGPUImageEffectDelegate-Protocol.h"

@class NSString, WBGPUImageEffectFrameBuffer, WBGPUImageEffectHandle;

@interface CKEffectBlackBorder : CKEffectOutput <WBGPUImageEffectDelegate>
{
    WBGPUImageEffectHandle *_effect;
    WBGPUImageEffectFrameBuffer *_inputFrame;
    WBGPUImageEffectFrameBuffer *_currentFrame;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)currentFrame;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1;
- (void)inputFrame:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)effectErrorCodeNotify:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

