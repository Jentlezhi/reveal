//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBMLBaseModel.h"

@class NSString;

@interface WBMLAdvertModel : WBMLBaseModel
{
    NSString *_url;
    NSString *_open_scheme;
    NSString *_type;
    NSString *_sortnum;
    NSString *_adid;
    NSString *_mark;
    long long _single_time;
}

+ (id)parseVideoListData:(id)arg1;
+ (id)parseParam:(id)arg1;
+ (void)featureWBMLAdvertWith:(id)arg1 complete:(CDUnknownBlockType)arg2;
@property(nonatomic) long long single_time; // @synthesize single_time=_single_time;
@property(copy, nonatomic) NSString *mark; // @synthesize mark=_mark;
@property(copy, nonatomic) NSString *adid; // @synthesize adid=_adid;
@property(copy, nonatomic) NSString *sortnum; // @synthesize sortnum=_sortnum;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *open_scheme; // @synthesize open_scheme=_open_scheme;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

