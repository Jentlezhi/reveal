//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WXInvocationConfig : NSObject
{
    NSString *_name;
    NSString *_clazz;
    NSMutableDictionary *_asyncMethods;
    NSMutableDictionary *_syncMethods;
}

@property(retain, nonatomic) NSMutableDictionary *syncMethods; // @synthesize syncMethods=_syncMethods;
@property(retain, nonatomic) NSMutableDictionary *asyncMethods; // @synthesize asyncMethods=_asyncMethods;
@property(retain, nonatomic) NSString *clazz; // @synthesize clazz=_clazz;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)registerMethods;
- (id)initWithName:(id)arg1 class:(id)arg2;
- (id)init;

@end

