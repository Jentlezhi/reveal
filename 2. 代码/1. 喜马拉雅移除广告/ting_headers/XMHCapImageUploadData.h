//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMHModel.h"

@class NSString;

@interface XMHCapImageUploadData : XMHModel
{
    _Bool _compression;
    _Bool _multiple;
    NSString *_uploadUrl;
    unsigned long long _max;
    double _quality;
    double _resize;
    NSString *_origin;
}

@property(copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(nonatomic) double resize; // @synthesize resize=_resize;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(nonatomic) unsigned long long max; // @synthesize max=_max;
@property(nonatomic) _Bool multiple; // @synthesize multiple=_multiple;
@property(nonatomic) _Bool compression; // @synthesize compression=_compression;
@property(copy, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
- (void).cxx_destruct;

@end

