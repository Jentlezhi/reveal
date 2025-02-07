//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CKEffectInput-Protocol.h"

@class CKDispatchQueue, CKMulticastDelegate, EAGLContext, NSArray, NSMutableArray, NSMutableDictionary, NSString, WBGPUImageEffectFrameBuffer, WBGPUImageEffectFrameBufferCache;
@protocol CKEffectPipelineDelegate;

@interface CKEffectPipeline : NSObject <CKEffectInput>
{
    NSMutableDictionary *_inputFrames;
    WBGPUImageEffectFrameBuffer *_currentFrame;
    CKMulticastDelegate<CKEffectPipelineDelegate> *_delegate;
    EAGLContext *_context;
    CKDispatchQueue *_queue;
    WBGPUImageEffectFrameBufferCache *_cache;
    NSMutableArray *_allEffects;
}

@property(retain, nonatomic) NSMutableArray *allEffects; // @synthesize allEffects=_allEffects;
@property(nonatomic) __weak WBGPUImageEffectFrameBufferCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) __weak CKDispatchQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak EAGLContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CKMulticastDelegate<CKEffectPipelineDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)currentFrame;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1;
- (void)inputFrame:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)canRunCurrentQueue;
- (void)clean;
- (void)removeLastEffect;
- (void)replaceWithEffects:(id)arg1;
- (void)removeEffectAtIndex:(unsigned long long)arg1;
- (void)removeEffect:(id)arg1;
- (void)insertEffect:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addEffect:(id)arg1;
- (_Bool)isEmpty;
@property(readonly, nonatomic) NSArray *effects;
- (void)runAsync:(CDUnknownBlockType)arg1;
- (void)runSync:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 queue:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

