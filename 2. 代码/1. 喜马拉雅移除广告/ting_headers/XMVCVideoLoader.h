//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMVCMediaLoader.h"

@class XMNRequest;

@interface XMVCVideoLoader : XMVCMediaLoader
{
    _Bool _useKey;
    unsigned long long _urlKey;
    XMNRequest *_request;
}

@property(retain, nonatomic) XMNRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long urlKey; // @synthesize urlKey=_urlKey;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (id)initWithUrlKey:(unsigned long long)arg1;

@end

