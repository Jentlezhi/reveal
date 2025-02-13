//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "WBDraggalbeDelegate-Protocol.h"
#import "WeiboCubeLiveProtocol-Protocol.h"

@class NSDate, NSMutableDictionary, NSString, UIView, UIViewController, WBDraggalbeView, WBWindow11;
@protocol WBFloatWindowProtcol;

@interface WBFloatWindow : NSObject <WBDraggalbeDelegate, CAAnimationDelegate, WeiboCubeLiveProtocol>
{
    UIView *_showView;
    struct CGRect _moveInRect;
    NSDate *_enterDate;
    _Bool _hasFloatWindow;
    WBWindow11 *_windows;
    UIViewController *_fromViewController;
    id <WBFloatWindowProtcol> _delegate;
    UIView *_moveArea;
    WBDraggalbeView *_dragView;
    NSMutableDictionary *_priorityDic;
    struct CGRect _showAnimalFromRect;
    struct CGRect _dest;
}

+ (_Bool)enableWBITFloatWindow;
+ (_Bool)enableWBNewFloatWindow;
+ (_Bool)enableWBFloatWindow;
+ (id)floatWindow;
@property(retain, nonatomic) NSMutableDictionary *priorityDic; // @synthesize priorityDic=_priorityDic;
@property(retain, nonatomic) WBDraggalbeView *dragView; // @synthesize dragView=_dragView;
@property(retain, nonatomic) UIView *moveArea; // @synthesize moveArea=_moveArea;
@property(nonatomic) struct CGRect dest; // @synthesize dest=_dest;
@property(nonatomic) struct CGRect showAnimalFromRect; // @synthesize showAnimalFromRect=_showAnimalFromRect;
@property(nonatomic) __weak id <WBFloatWindowProtcol> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasFloatWindow; // @synthesize hasFloatWindow=_hasFloatWindow;
@property(retain, nonatomic) UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(nonatomic) struct CGRect moveInRect; // @synthesize moveInRect=_moveInRect;
@property(retain, nonatomic) UIView *showView; // @synthesize showView=_showView;
@property(retain, nonatomic) WBWindow11 *windows; // @synthesize windows=_windows;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *floatWindowView;
- (unsigned long long)floatWindowPriority;
- (void)setFromViewController:(id)arg1 priority:(unsigned long long)arg2;
- (void)setDragViewAlpha:(double)arg1;
- (void)notifyVideoGroup:(id)arg1;
- (void)addVideoNotification;
- (_Bool)enableFloatWindow;
- (void)notifyTerminateMsg:(id)arg1;
- (void)currentAccountDidChange:(id)arg1;
- (void)notifyObserverEnterFont:(id)arg1;
- (void)notifyObserverEnterBackground:(id)arg1;
- (void)removeNotifycation;
- (void)addNotifycation;
- (void)clearLastPosition;
- (struct CGPoint)getCachePos;
- (void)cachePos:(struct CGPoint)arg1;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (id)topMostViewController;
@property(readonly, nonatomic) unsigned long long modeType;
- (void)recoverFloatWindow_;
- (void)tapView:(id)arg1;
- (void)closeView:(id)arg1;
- (_Bool)sameFloatWindow:(id)arg1;
- (void)recoverFloatWindow;
- (void)closeFloatWindow;
- (void)resetWindowPos;
- (void)close;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)outAnimal;
- (void)inAnimal;
- (void)showView:(id)arg1 delegate:(id)arg2 fromViewController:(id)arg3;
- (void)dealloc;
- (id)init;
@property(copy, nonatomic) NSString *force_close;
@property(readonly, nonatomic) NSString *status;
@property(readonly, nonatomic) NSString *luicode;
@property(readonly, nonatomic) NSString *lfid;
@property(readonly, nonatomic) NSString *containerId;
@property(readonly, nonatomic) NSString *uicode;
- (id)addMustInfoWithParam:(id)arg1;
- (void)recordCode:(id)arg1 ExtInfo:(id)arg2;
- (void)codeAnalyzeWith1826;
- (void)codeAnalyzeWith1825;
- (void)codeAnalyzeWith1827;
- (void)codeAnalyzeWith1594;
- (void)stopMediaPlaying;
- (void)pauseMediaPlaying;
- (_Bool)hasMediaPlaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

