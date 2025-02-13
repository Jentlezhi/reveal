//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "XMVXPageViewControllerDataSource-Protocol.h"
#import "XMVXPageViewControllerDelegate-Protocol.h"

@class CAGradientLayer, CDZButton, NSString, UIImageView, UILabel, UIView, XMDubShowVoiceTopicChallengeViewController, XMDubShowVoiceTopicNavBar, XMDubShowVoiceTopicNewestViewController, XMDubShowVoiceTopicVCModel, XMSegmentControl, XMVXPageViewController, XMWebImageView;

@interface XMDubShowVoiceTopicViewController : XMBaseVC <XMVXPageViewControllerDelegate, XMVXPageViewControllerDataSource, UIScrollViewDelegate>
{
    _Bool _fold;
    XMDubShowVoiceTopicNavBar *_navBar;
    XMWebImageView *_webBGImgView;
    UIView *_maskView;
    UILabel *_vtTitle;
    UILabel *_vtDetail;
    UILabel *_vtTime;
    UIView *_textView;
    CAGradientLayer *_textViewMask;
    XMDubShowVoiceTopicVCModel *_model;
    XMVXPageViewController *_xmPageVC;
    XMDubShowVoiceTopicChallengeViewController *_challengeVC;
    XMDubShowVoiceTopicNewestViewController *_newestVC;
    long long _currentVCIndex;
    UIView *_headerView;
    CDZButton *_headerDicImgView;
    UIView *_headerCorButtonView;
    XMSegmentControl *_segCtrolFloatingView;
    UIView *_segCtrolFloatingViewContent;
    XMWebImageView *_adImageView;
    double _htoNavLength;
    double _htoNavLengthUnfold;
    long long _topicID;
    UIView *_emptyView;
    double _beginTimeTS;
    UIView *_myWorksView;
    XMWebImageView *_myAvater;
    UILabel *_myWorksLabel;
    UIImageView *_myWorksDicImgV;
    struct CGPoint _preOrigin;
}

@property(retain, nonatomic) UIImageView *myWorksDicImgV; // @synthesize myWorksDicImgV=_myWorksDicImgV;
@property(retain, nonatomic) UILabel *myWorksLabel; // @synthesize myWorksLabel=_myWorksLabel;
@property(retain, nonatomic) XMWebImageView *myAvater; // @synthesize myAvater=_myAvater;
@property(retain, nonatomic) UIView *myWorksView; // @synthesize myWorksView=_myWorksView;
@property(nonatomic) double beginTimeTS; // @synthesize beginTimeTS=_beginTimeTS;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) long long topicID; // @synthesize topicID=_topicID;
@property(nonatomic) _Bool fold; // @synthesize fold=_fold;
@property(nonatomic) double htoNavLengthUnfold; // @synthesize htoNavLengthUnfold=_htoNavLengthUnfold;
@property(nonatomic) double htoNavLength; // @synthesize htoNavLength=_htoNavLength;
@property(retain, nonatomic) XMWebImageView *adImageView; // @synthesize adImageView=_adImageView;
@property(retain, nonatomic) UIView *segCtrolFloatingViewContent; // @synthesize segCtrolFloatingViewContent=_segCtrolFloatingViewContent;
@property(retain, nonatomic) XMSegmentControl *segCtrolFloatingView; // @synthesize segCtrolFloatingView=_segCtrolFloatingView;
@property(retain, nonatomic) UIView *headerCorButtonView; // @synthesize headerCorButtonView=_headerCorButtonView;
@property(retain, nonatomic) CDZButton *headerDicImgView; // @synthesize headerDicImgView=_headerDicImgView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) long long currentVCIndex; // @synthesize currentVCIndex=_currentVCIndex;
@property(retain, nonatomic) XMDubShowVoiceTopicNewestViewController *newestVC; // @synthesize newestVC=_newestVC;
@property(retain, nonatomic) XMDubShowVoiceTopicChallengeViewController *challengeVC; // @synthesize challengeVC=_challengeVC;
@property(retain, nonatomic) XMVXPageViewController *xmPageVC; // @synthesize xmPageVC=_xmPageVC;
@property(retain, nonatomic) XMDubShowVoiceTopicVCModel *model; // @synthesize model=_model;
@property(nonatomic) struct CGPoint preOrigin; // @synthesize preOrigin=_preOrigin;
@property(retain, nonatomic) CAGradientLayer *textViewMask; // @synthesize textViewMask=_textViewMask;
@property(retain, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *vtTime; // @synthesize vtTime=_vtTime;
@property(retain, nonatomic) UILabel *vtDetail; // @synthesize vtDetail=_vtDetail;
@property(retain, nonatomic) UILabel *vtTitle; // @synthesize vtTitle=_vtTitle;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) XMWebImageView *webBGImgView; // @synthesize webBGImgView=_webBGImgView;
@property(retain, nonatomic) XMDubShowVoiceTopicNavBar *navBar; // @synthesize navBar=_navBar;
- (void).cxx_destruct;
- (void)shareShakeAnimation;
- (void)p_handleAdAction;
- (void)postPageWaitingTimeReverse:(_Bool)arg1;
- (id)sharePlatForModel:(id)arg1;
- (void)staticWithShareSuccessWithState:(unsigned long long)arg1 model:(id)arg2;
- (void)staticWithShareBeginWithState:(unsigned long long)arg1 model:(id)arg2;
- (void)shareAction;
- (id)blurredImageWithImage:(id)arg1;
- (void)tomyworkView;
- (void)hideMyWorksView;
- (void)showMyWorksView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)vxPageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)vxPageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)vxPageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)vxPageViewController:(id)arg1 floatingViewOriginDidChange:(struct CGPoint)arg2;
- (void)updateMyWorkViewUI;
- (void)resizeDetailView;
- (void)updateUI;
- (void)updateHeaderFrame:(double)arg1 fold:(_Bool)arg2;
- (void)updateHeaderUIWithAnimation:(_Bool)arg1 fold:(_Bool)arg2;
- (void)dicTapAction;
- (void)loadData;
- (void)buildMyWorkView;
- (void)setupView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTopicID:(long long)arg1;
- (void)dealloc;
- (long long)overrideUserInterfaceStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

