//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMHybridViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, XMAlbumItem;

@interface XMCampAlbumBoughtSuccessViewController : XMHybridViewController <UIWebViewDelegate>
{
    XMAlbumItem *_albumItem;
}

@property(retain, nonatomic) XMAlbumItem *albumItem; // @synthesize albumItem=_albumItem;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

