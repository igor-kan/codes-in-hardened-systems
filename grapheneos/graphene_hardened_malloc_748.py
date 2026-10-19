"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 748."""

def spec_graphene_hardened_malloc_748() -> dict:
    return {"system": "GrapheneOS", "spec_id": 748, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_748():
    s = spec_graphene_hardened_malloc_748()
    assert s["spec_id"] == 748
