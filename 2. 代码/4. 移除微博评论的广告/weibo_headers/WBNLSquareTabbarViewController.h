//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBCustomTabBarController.h"

@class WBNLLiveSquareTipsManager;

@interface WBNLSquareTabbarViewController : WBCustomTabBarController
{
    WBNLLiveSquareTipsManager *_tipsManager;
    long long _chatroomId;
}

@property(nonatomic) long long chatroomId; // @synthesize chatroomId=_chatroomId;
@property(retain, nonatomic) WBNLLiveSquareTipsManager *tipsManager; // @synthesize tipsManager=_tipsManager;
- (void).cxx_destruct;
- (void)jumpTochatRoom;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;

@end

