//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface XMABindPhoneViewModel : NSObject
{
    unsigned long long _loginState;
    unsigned long long _verifyCodeViewAction;
    NSString *_countryCode;
    NSString *_fullPhoneNumber;
    NSString *_verifyCode;
    unsigned long long _requestStatus;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long requestStatus; // @synthesize requestStatus=_requestStatus;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(copy, nonatomic) NSString *fullPhoneNumber; // @synthesize fullPhoneNumber=_fullPhoneNumber;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) unsigned long long verifyCodeViewAction; // @synthesize verifyCodeViewAction=_verifyCodeViewAction;
@property(nonatomic) unsigned long long loginState; // @synthesize loginState=_loginState;
- (void).cxx_destruct;
- (void)forceBind;
- (void)startBindPhone;
- (id)init;

@end

