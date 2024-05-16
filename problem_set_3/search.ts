type Candidate = {
	name: string;
	votes: number;
};

const candidates: Candidate[] = [];

candidates[0] = { name: 'Carter', votes: 10 };
candidates[1] = { name: 'Julia', votes: 12 };
candidates[2] = { name: 'Matt', votes: 8 };

// find highest number of votes
let highestVotes = 0;
for (let i = 0; i < candidates.length; i++) {
	if (candidates[i].votes > highestVotes) {
		highestVotes = candidates[i].votes;
	}
}
console.log(highestVotes);

// print name of candidate with highest number of votes
for (let i = 0; i < candidates.length; i++) {
	if (candidates[i].votes === highestVotes) {
		console.log(candidates[i].name);
	}
}
