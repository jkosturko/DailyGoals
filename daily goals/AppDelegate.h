//
//  AppDelegate.h
//  daily goals
//
//  Created by Kosturko, Jessica on 2/14/13.
//  Copyright (c) 2013 Kosturko, Jessica. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
    NSMutableDictionary *myDictionary;
    NSMutableDictionary *dateSpecObject;
    NSMutableDictionary *textObject;
    NSString *myDate;
    NSDate *NsDateTracker;
}
@property (weak) IBOutlet NSTextField *dateLabel;

- (IBAction)triggerCheckBox:(NSButton *)sender;
- (IBAction)textEvent:(NSTextField *)sender;
- (IBAction)buttonSaveEverything:(NSButton *)sender;

@property (strong) IBOutlet NSTextField *text3;
@property (strong) IBOutlet NSTextField *text2;
@property (strong) IBOutlet NSTextField *text1;

- (IBAction)segCell:(NSSegmentedCell *)sender;
@property (weak) IBOutlet NSTextField *successText;

@property (weak) IBOutlet NSButton *check1;
@property (weak) IBOutlet NSButton *check2;
@property (weak) IBOutlet NSButton *check3;
@property (weak) IBOutlet NSTextField *extraBox;
@property (unsafe_unretained) IBOutlet NSTextView *extraBoxTextView;
@end

