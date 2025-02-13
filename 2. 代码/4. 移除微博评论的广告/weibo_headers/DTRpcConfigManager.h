//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTRpcConfig, NSDictionary, NSMutableDictionary;

@interface DTRpcConfigManager : NSObject
{
    _Bool _resendMapChange;
    DTRpcConfig *_globalConfig;
    DTRpcConfig *_globalOnceConfig;
    NSMutableDictionary *_operationTypeConfigs;
    NSDictionary *_resendMap;
    NSMutableDictionary *_resendMutableMap;
    CDUnknownBlockType _rpcConfigBlock;
}

@property(copy, nonatomic) CDUnknownBlockType rpcConfigBlock; // @synthesize rpcConfigBlock=_rpcConfigBlock;
@property(retain, nonatomic) NSMutableDictionary *resendMutableMap; // @synthesize resendMutableMap=_resendMutableMap;
@property(retain) NSDictionary *resendMap; // @synthesize resendMap=_resendMap;
@property(nonatomic) _Bool resendMapChange; // @synthesize resendMapChange=_resendMapChange;
@property(retain, nonatomic) NSMutableDictionary *operationTypeConfigs; // @synthesize operationTypeConfigs=_operationTypeConfigs;
@property(retain, nonatomic) DTRpcConfig *globalOnceConfig; // @synthesize globalOnceConfig=_globalOnceConfig;
@property(retain, nonatomic) DTRpcConfig *globalConfig; // @synthesize globalConfig=_globalConfig;
- (void).cxx_destruct;
- (void)saveRetryable;
- (void)addRetryableOperationType:(id)arg1 value:(id)arg2;
- (id)retryableValueOfOperationType:(id)arg1;
- (void)loadResendRPCData;
- (void)removeResendConfig;
- (void)removeCDNConfig;
- (id)preferredConfig:(id)arg1;
- (void)setConfig:(CDUnknownBlockType)arg1;
- (void)setConfig:(id)arg1 forScope:(int)arg2;
- (id)configForScope:(int)arg1;
- (id)init;

@end

