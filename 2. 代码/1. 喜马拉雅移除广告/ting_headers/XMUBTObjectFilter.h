//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMUBTObjectFilter : NSObject
{
    NSString *_className;
    long long _objectIndex;
    NSString *_additionalPredicate;
}

@property(copy, nonatomic) NSString *additionalPredicate; // @synthesize additionalPredicate=_additionalPredicate;
@property(nonatomic) long long objectIndex; // @synthesize objectIndex=_objectIndex;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (id)init;

@end

