//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface WBCrashLogInfo : NSObject
{
    NSString *_pluginClass;
    NSString *_crashCode;
    unsigned long long _currentMode;
    NSDate *_crashTime;
    NSDictionary *_detailDict;
}

@property(retain, nonatomic) NSDictionary *detailDict; // @synthesize detailDict=_detailDict;
@property(retain, nonatomic) NSDate *crashTime; // @synthesize crashTime=_crashTime;
@property(nonatomic) unsigned long long currentMode; // @synthesize currentMode=_currentMode;
@property(retain, nonatomic) NSString *crashCode; // @synthesize crashCode=_crashCode;
@property(retain, nonatomic) NSString *pluginClass; // @synthesize pluginClass=_pluginClass;
- (void).cxx_destruct;
- (_Bool)decodeWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (_Bool)isEqualToCrashLogInfo:(id)arg1;
- (void)dealloc;

@end

