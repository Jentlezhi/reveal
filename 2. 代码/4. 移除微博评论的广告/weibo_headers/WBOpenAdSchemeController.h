//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class NSDictionary, NSString, UIImageView;

@interface WBOpenAdSchemeController : WBViewController
{
    _Bool _hasRequest;
    NSString *_scheme;
    NSString *_urlScheme;
    NSString *_universalLink;
    NSString *_downloadScheme;
    NSString *_markid;
    NSString *_pasteString;
    NSString *_pasteTips;
    NSString *_mid;
    NSString *_aduid;
    NSDictionary *_actionlog;
    NSString *_copytipsimageUrl;
    UIImageView *_tipsImageView;
}

@property(retain, nonatomic) UIImageView *tipsImageView; // @synthesize tipsImageView=_tipsImageView;
@property(nonatomic) _Bool hasRequest; // @synthesize hasRequest=_hasRequest;
@property(retain, nonatomic) NSString *copytipsimageUrl; // @synthesize copytipsimageUrl=_copytipsimageUrl;
@property(retain, nonatomic) NSDictionary *actionlog; // @synthesize actionlog=_actionlog;
@property(retain, nonatomic) NSString *aduid; // @synthesize aduid=_aduid;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *pasteTips; // @synthesize pasteTips=_pasteTips;
@property(retain, nonatomic) NSString *pasteString; // @synthesize pasteString=_pasteString;
@property(retain, nonatomic) NSString *markid; // @synthesize markid=_markid;
@property(retain, nonatomic) NSString *downloadScheme; // @synthesize downloadScheme=_downloadScheme;
@property(retain, nonatomic) NSString *universalLink; // @synthesize universalLink=_universalLink;
@property(retain, nonatomic) NSString *urlScheme; // @synthesize urlScheme=_urlScheme;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
- (void).cxx_destruct;
- (void)recordAdJumpLogWithClickScheme:(id)arg1 outside:(id)arg2;
- (void)handleReponseWithDic:(id)arg1 error:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

@end

