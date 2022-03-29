# Week 7 - Maps

## Team

Team name:
Date:

Members

| Role                                                                                                                                                                          | Name |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------|
| **Facilitator** keeps track of time, assigns tasks and makes sure all the group members are heard and that decisions are agreed upon.                                             |      |
| **Spokesperson** communicates group’s questions and problems to the teacher and talks to other teams; presents the group’s findings.                                              |      |
| **Reflector** observes and assesses the interactions and performance among team members. Provides positive feedback and intervenes with suggestions to improve groups’ processes. |      |
| **Recorder** guides consensus building in the group by recording answers to questions. Collects important information and data.                                                   |      |

## Activities
Make sure to have the activities signed off regularly to ensure progress is tracked.

Download the provided project and open it in CLion.

### Activity 1: The ctype header file

Record your answer here

### Activity 2: Count letters in a string

```c
unsigned long countLetters(unsigned long counts[static 26], const char* str) {
    ...
}

int main(void){
	unsigned long counts[26] = {0};
	const char* text = "The Quick Brown Fox Jumps Over The Lazy Dog.";
	unsigned long total = countLetters(&counts[0], text);
	assert(35 == total);
	printCounts(&counts[0], false, true);
}
```

### Activity 3: Recognizing languages

```c
const char* makeSignature(unsigned long counts[static 26]) {
    ...
}

int main(void) {
    unsigned long counts1[26] = {15,3,4,5,16,6,7,8,9,7,6,3,2,11,14,1,2,12,13};
	unsigned long counts2[26] = {16,4,7,5,20,7,4,3,14,5,9,1,2,18,6,12,9,13,9,15};
	assert(strcmp("eaosrn", makeSignature(counts1)) == 0);
	assert(strcmp("enatir", makeSignature(counts2)) == 0);
}
```

| File       | Signature | Language |
| ---------- | --------- | -------- |
| alice0.txt |           |          |
| alice1.txt |           |          |
| alice2.txt |           |          |
| alice3.txt |           |          |



### Activity 4: Find out: dictionaries around us

Record your answer here

### Activity 5: Find out: dictionaries in other languages

Record your answer here

### Activity 6: The ensureCapacity function

```c
bool _ensureCapacity(counter_t* counter, size_t minimumCapacity) {
    ...
}
```
Record your answer here

### Activity 7: insertAt function

```c
bool _insertAt(counter_t* counter, const size_t index, const char* key, unsigned long value) {
    ...
}

int main() {
	counter_t counter;
	initCounter(&counter, 0);
	insert(&counter, "Bob", 3);
	insert(&counter, "Dave", 4);
	insert(&counter, "Alice", 5);
	insert(&counter, "Eva", 3);
	insert(&counter, "Charlie", 7);
	assert(strcmp(counter.data[0].key, "Alice") == 0);
	assert(counter.data[0].value == 5);
	assert(strcmp(counter.data[1].key, "Bob") == 0);
	assert(counter.data[1].value == 3);
	assert(strcmp(counter.data[2].key, "Charlie") == 0);
	assert(counter.data[2].value == 7);
	assert(strcmp(counter.data[3].key, "Dave") == 0);
	assert(counter.data[3].value == 4);
	assert(strcmp(counter.data[4].key, "Eva") == 0);
	assert(counter.data[4].value == 3);
	assert(counter.size == 5);
	assert(counter.capacity >= counter.size);
	destroyCounter(&counter);
}
```

Record your answer here

### Activity 8: Increment function
```c
unsigned long increment(counter_t* counter, const char* key) {
    ...
}

int main(void) {
	counter_t counter;
	initCounter(&counter, 0);
	increment(&counter, "Alice");
	increment(&counter, "Alice");
	increment(&counter, "Alice");
	increment(&counter, "Bob");
	increment(&counter, "Bob");
	assert(counter.size == 2);
	assert(counter.data[0].value == 3);
	assert(counter.data[1].value == 2);
	destroyCounter(&counter);
}
```

### Activity 9: Find out: function `strtok`

Record your answer here


### Activity 10: How many words?

Record your answer here

## Looking back

### What we've learnt

Formulate at least one lesson learned.

### What were the surprises

Fill in...

### What problems we've encountered

Fill in...

### What was or still is unclear

Fill in...

### How did the group perform?

How was the collaboration? What were the reasons for hick-ups? What worked well? What can be improved next time?





> Written with [StackEdit](https://stackedit.io/).
