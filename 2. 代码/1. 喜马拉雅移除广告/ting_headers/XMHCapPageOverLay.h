//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMHModel.h"

@class NSURL;

@interface XMHCapPageOverLay : XMHModel
{
    NSURL *_imgUrl;
    NSURL *_uri;
}

@property(retain, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(retain, nonatomic) NSURL *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;
- (id)modelCustomWillTransformFromDictionary:(id)arg1;

@end

