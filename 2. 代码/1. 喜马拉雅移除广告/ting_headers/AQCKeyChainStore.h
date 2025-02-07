//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AQCKeyChainStore : NSObject
{
    NSMutableDictionary *itemsToUpdate;
    NSString *_service;
    NSString *_accessGroup;
}

+ (id)itemsForService:(id)arg1 accessGroup:(id)arg2;
+ (_Bool)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (_Bool)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (_Bool)removeItemForKey:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (_Bool)removeItemForKey:(id)arg1 service:(id)arg2;
+ (_Bool)removeItemForKey:(id)arg1 error:(id *)arg2;
+ (_Bool)removeItemForKey:(id)arg1;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 error:(id *)arg5;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 error:(id *)arg4;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2;
+ (id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3;
+ (id)dataForKey:(id)arg1 service:(id)arg2 error:(id *)arg3;
+ (id)dataForKey:(id)arg1 service:(id)arg2;
+ (id)dataForKey:(id)arg1 error:(id *)arg2;
+ (id)dataForKey:(id)arg1;
+ (id)keyChainStoreWithService:(id)arg1;
+ (void)setDefaultService:(id)arg1;
+ (id)defaultService;
@property(readonly, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)description;
- (void)synchronize;
- (void)removeItemForKey:(id)arg1 error:(id *)arg2;
- (void)removeItemForKey:(id)arg1;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
- (id)initWithService:(id)arg1;

@end

