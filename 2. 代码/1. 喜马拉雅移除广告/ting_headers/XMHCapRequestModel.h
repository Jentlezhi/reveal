//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMHModel.h"

@class NSDictionary, NSString, NSURL;

@interface XMHCapRequestModel : XMHModel
{
    _Bool _cache;
    NSURL *_url;
    NSString *_type;
    NSDictionary *_header;
    NSDictionary *_data;
    NSString *_dataType;
    NSString *_contentType;
    long long _traditional;
}

@property(nonatomic) _Bool cache; // @synthesize cache=_cache;
@property(nonatomic) long long traditional; // @synthesize traditional=_traditional;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)modelCustomWillTransformFromDictionary:(id)arg1;

@end

