//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface XMNUpToken : NSObject
{
    NSString *_token;
    id _strategyId;
    NSArray *_delays;
    NSString *_serverIp;
    NSArray *_blockSizes;
    NSMutableDictionary *_bitRates;
    long long _optimalSize;
}

@property(nonatomic) long long optimalSize; // @synthesize optimalSize=_optimalSize;
@property(retain, nonatomic) NSMutableDictionary *bitRates; // @synthesize bitRates=_bitRates;
@property(retain, nonatomic) NSArray *blockSizes; // @synthesize blockSizes=_blockSizes;
@property(retain, nonatomic) NSString *serverIp; // @synthesize serverIp=_serverIp;
@property(retain, nonatomic) NSArray *delays; // @synthesize delays=_delays;
@property(retain, nonatomic) id strategyId; // @synthesize strategyId=_strategyId;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (long long)currentSize;
- (void)updateBitRate:(long long)arg1 forBlockSize:(long long)arg2;
- (id)initWithToken:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

