//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class COChan, CODispatch, NSError, NSMutableArray, NSMutableDictionary;

@interface COCoroutine : NSObject
{
    _Bool _isFinished;
    _Bool _isCancelled;
    _Bool _isResume;
    CDUnknownBlockType _finishedBlock;
    CDUnknownBlockType _execBlock;
    CODispatch *_dispatch;
    struct coroutine *_co;
    COChan *_currentChan;
    NSError *_lastError;
    NSMutableDictionary *_parameters;
    CDUnknownBlockType _joinBlock;
    NSMutableArray *_subroutines;
    COCoroutine *_parent;
}

+ (id)coroutineWithBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2 stackSize:(unsigned long long)arg3;
+ (id)coroutineWithBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
+ (_Bool)isActive;
+ (id)currentCoroutine;
@property(nonatomic) __weak COCoroutine *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSMutableArray *subroutines; // @synthesize subroutines=_subroutines;
@property(copy, nonatomic) CDUnknownBlockType joinBlock; // @synthesize joinBlock=_joinBlock;
@property(retain, nonatomic) NSMutableDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool isResume; // @synthesize isResume=_isResume;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) COChan *currentChan; // @synthesize currentChan=_currentChan;
@property(nonatomic) struct coroutine *co; // @synthesize co=_co;
@property(retain, nonatomic) CODispatch *dispatch; // @synthesize dispatch=_dispatch;
@property(copy, nonatomic) CDUnknownBlockType execBlock; // @synthesize execBlock=_execBlock;
@property(copy, nonatomic) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
- (void).cxx_destruct;
- (void)cancelAndJoin;
- (void)join;
- (void)addToScheduler;
- (void)resumeNow;
- (id)resume;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)cancel;
- (void)_internalCancel;
- (void)performBlockOnQueue:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2 stackSize:(unsigned long long)arg3;
- (id)paramForKey:(id)arg1;
- (void)setParam:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)execute;

@end

