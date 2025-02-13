//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseViewController.h"

@class NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView, XMServerRequest, XMWebImageView;

@interface XMThirdOAuthViewController : XMBaseViewController
{
    NSString *appSchemeUrl;
    UIScrollView *bgScrollView;
    UIView *headerView;
    XMWebImageView *thirdImgView;
    UILabel *thirdNameLab;
    UIButton *loginButton;
    XMServerRequest *infoRequest;
    XMServerRequest *scopesRequest;
    NSString *schemeString;
    NSString *client_id;
    NSString *redirect_uri;
    NSString *pack_id;
    UIImageView *_openPlatformLogoImageView;
    UILabel *_openPlatFormLabel;
}

@property(retain, nonatomic) UILabel *openPlatFormLabel; // @synthesize openPlatFormLabel=_openPlatFormLabel;
@property(retain, nonatomic) UIImageView *openPlatformLogoImageView; // @synthesize openPlatformLogoImageView=_openPlatformLogoImageView;
@property(retain, nonatomic) NSString *pack_id; // @synthesize pack_id;
@property(retain, nonatomic) NSString *redirect_uri; // @synthesize redirect_uri;
@property(retain, nonatomic) NSString *client_id; // @synthesize client_id;
@property(retain, nonatomic) NSString *schemeString; // @synthesize schemeString;
@property(retain, nonatomic) XMServerRequest *scopesRequest; // @synthesize scopesRequest;
@property(retain, nonatomic) XMServerRequest *infoRequest; // @synthesize infoRequest;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton;
@property(retain, nonatomic) UILabel *thirdNameLab; // @synthesize thirdNameLab;
@property(retain, nonatomic) XMWebImageView *thirdImgView; // @synthesize thirdImgView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView;
@property(retain, nonatomic) UIScrollView *bgScrollView; // @synthesize bgScrollView;
@property(retain, nonatomic) NSString *appSchemeUrl; // @synthesize appSchemeUrl;
- (void).cxx_destruct;
- (void)refreshAuthorizeInfoWithArray:(id)arg1;
- (void)onGetAuthorizeFail:(id)arg1;
- (void)onGetAuthorizeFinish:(id)arg1;
- (void)requestAuthorizeItems;
- (void)onGetInfoFail:(id)arg1;
- (void)onGetInfoFinish:(id)arg1;
- (void)requestAuthorizeInfo;
- (void)onAuthLogin;
- (void)back;
- (_Bool)isSmallScreen;
- (void)customInitialize;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

