//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMLoginManager : NSObject
{
    _Bool _highRisk;
    _Bool _isAgreed;
    unsigned long long _biz;
    NSString *_phone;
    NSString *_mail;
    NSString *_password;
    NSString *_verifyCode;
    NSString *_countryCode;
    NSString *_mobileMask;
    NSString *_mobileCipher;
}

@property(copy, nonatomic) NSString *mobileCipher; // @synthesize mobileCipher=_mobileCipher;
@property(copy, nonatomic) NSString *mobileMask; // @synthesize mobileMask=_mobileMask;
@property(nonatomic) _Bool isAgreed; // @synthesize isAgreed=_isAgreed;
@property(nonatomic) _Bool highRisk; // @synthesize highRisk=_highRisk;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *mail; // @synthesize mail=_mail;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(nonatomic) unsigned long long biz; // @synthesize biz=_biz;
- (void).cxx_destruct;
- (void)openPrivacyPolicy;
- (void)openUserAgreement;
- (id)requestCountryCode;
- (void)openForgetPsw;
- (void)p_toBindPhone;
- (void)p_toValidateMobile;
- (void)handleException:(id)arg1;
- (id)riskCheck;
- (void)authLoginWithType:(unsigned long long)arg1;
- (id)validateMobile;
- (id)bindLogin;
- (id)smsLogin;
- (id)voiceSmsSend;
- (id)smsSend;
- (void)passwordLogin;

@end

