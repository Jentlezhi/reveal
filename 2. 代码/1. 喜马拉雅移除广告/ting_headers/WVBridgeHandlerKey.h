//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface WVBridgeHandlerKey : NSObject <NSCopying>
{
    NSString *_description;
    unsigned long long _hashValue;
    NSString *_className;
    NSString *_handlerName;
}

+ (id)handlerKeyWithName:(id)arg1;
+ (id)handlerKeyWithClassName:(id)arg1 withHandlerName:(id)arg2;
@property(readonly, copy, nonatomic) NSString *handlerName; // @synthesize handlerName=_handlerName;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClassName:(id)arg1 withHandlerName:(id)arg2;

@end

