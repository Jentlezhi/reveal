//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveJSONModel.h"

@class NSString;

@interface TBLiveMessageTradeShowWithProtobuf : TBLiveJSONModel
{
    int _type;
    NSString *_nick;
}

+ (id)parseFromData:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

