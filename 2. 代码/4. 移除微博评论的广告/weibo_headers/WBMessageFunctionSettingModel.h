//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WBConversation;

@interface WBMessageFunctionSettingModel : NSObject
{
    _Bool _state;
    long long _type;
    NSString *_name;
    NSString *_desc;
    WBConversation *_conversion;
}

@property(retain, nonatomic) WBConversation *conversion; // @synthesize conversion=_conversion;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool state; // @synthesize state=_state;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;

@end

