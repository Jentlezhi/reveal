//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RNXMHttpFieldProvider-Protocol.h"

@class NSString;

@interface RNXMHttpConstantFieldProvider : NSObject <RNXMHttpFieldProvider>
{
    NSString *_fieldValue;
    NSString *fieldName;
}

@property(copy, nonatomic) NSString *fieldName; // @synthesize fieldName;
- (void).cxx_destruct;
- (id)fieldValue;
- (id)initWithFieldName:(id)arg1 value:(id)arg2;

@end

