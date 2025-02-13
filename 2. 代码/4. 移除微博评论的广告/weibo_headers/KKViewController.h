//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KKViewController-Protocol.h"

@class KKApplication, KKController, NSDictionary;

@interface KKViewController : UIViewController <KKViewController>
{
    _Bool _nextViewController;
    NSDictionary *_action;
    KKController *_controller;
}

+ (Class)controllerClass;
@property(readonly, nonatomic, getter=isNextViewController) _Bool nextViewController; // @synthesize nextViewController=_nextViewController;
@property(retain, nonatomic) NSDictionary *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)doCloseAction:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
@property(retain, nonatomic) KKApplication *application;
@property(readonly, nonatomic) KKController *controller; // @synthesize controller=_controller;

@end

