//
//  MainTabViewController.h
//  Bob
//
//  Created by tisfeng on 2022/11/3.
//  Copyright © 2022 ripperhe. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "EZLayoutManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface EZBaseQueryViewController : NSViewController

@property (nonatomic, assign) EZWindowType windowType;
@property (nonatomic, weak) EZBaseQueryWindow *window;

@property (nonatomic, copy) void (^resizeWindowBlock)(void);

- (instancetype)initWithWindowType:(EZWindowType)type;

- (void)startQueryText:(NSString *)text;
- (void)startQueryImage:(NSImage *)image;
- (void)retry;

- (void)focusInputTextView;

@end

NS_ASSUME_NONNULL_END