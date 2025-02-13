//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WBJSAuthorization;

@interface WBJSPermission : NSObject
{
    NSArray *_apiList;
    WBJSAuthorization *_authorization;
    NSString *_ticket;
    NSArray *_domains;
    double _expires;
    NSDictionary *_apiListMap;
}

@property(retain, nonatomic) NSDictionary *apiListMap; // @synthesize apiListMap=_apiListMap;
@property(nonatomic) double expires; // @synthesize expires=_expires;
@property(retain, nonatomic) NSArray *domains; // @synthesize domains=_domains;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) WBJSAuthorization *authorization; // @synthesize authorization=_authorization;
@property(retain, nonatomic) NSArray *apiList; // @synthesize apiList=_apiList;
- (void).cxx_destruct;
- (id)_decryptText:(id)arg1;
- (id)sha1:(id)arg1;
- (_Bool)fastExaminationForAuthorization:(id)arg1;
- (_Bool)expired;
- (_Bool)apiNamePermitted:(id)arg1;
- (id)initWithAuthorization:(id)arg1 responseObject:(id)arg2;

@end

