//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSError, NSString;

@interface CKEffectLog : NSObject <NSCopying>
{
    NSString *_identifier;
    double _startTime;
    double _endTime;
    NSError *_error;
    NSDictionary *_ext;
}

+ (int)getEffectID:(unsigned long long)arg1;
@property(retain, nonatomic) NSDictionary *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)end;
- (void)start;
@property(readonly, nonatomic) double duration;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

