//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface DNSUrlDomainItem : NSObject
{
    NSURL *_url;
    NSString *_domain;
    NSString *_originDomain;
}

@property(copy, nonatomic) NSString *originDomain; // @synthesize originDomain=_originDomain;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

